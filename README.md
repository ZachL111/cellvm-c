# cellvm-c

`cellvm-c` is a focused C codebase around evaluate spreadsheet-style expressions with dependency diagnostics. It is meant to be easy to inspect, run, and extend without a hosted service.

## Cellvm C Walkthrough

I would read the project from the outside in: command, fixture, model, then roadmap. That keeps the interpreters idea grounded in files that can be checked locally.

## How It Is Put Together

The interesting part is the boundary between accepted and reviewed scenarios. Extended examples sit near that boundary so future edits can show whether the model became more permissive or more cautious. The C implementation keeps headers, source, and assertions separate so bounds and types are easy to review.

## Reason For The Project

The repository exists to keep a technical idea small enough to reason about. The implementation avoids external dependencies where possible, then uses fixtures to make changes easy to review.

## Capabilities

- Uses fixture data to keep stack state changes visible in code review.
- Includes extended examples for runtime checks, including `surge` and `degraded`.
- Documents trace output tradeoffs in `docs/operations.md`.
- Runs locally with a single verification command and no external credentials.
- Stores project constants and verification metadata in `metadata/project.json`.

## Data Notes

`recovery` is the first example I would inspect because it lands on the `accept` path with a score of 186. The broader file also keeps `degraded` at -22 and `surge` at 217, which gives the model a useful low-to-high spread.

## Where Things Live

- `src`: primary implementation
- `tests`: verification harness
- `fixtures`: compact golden scenarios
- `examples`: expanded scenario set
- `metadata`: project constants and verification metadata
- `docs`: operations and extension notes
- `scripts`: local verification and audit commands

## Getting It Running

Use a normal shell with C available on `PATH`. The verifier is written as a PowerShell script because the portfolio was assembled on Windows.

## Command Examples

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

This runs the language-level build or test path against the compact fixture set.

## Check The Work

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/audit.ps1
```

The audit command checks repository structure and README constraints before it delegates to the verifier.

## Tradeoffs

This code is local-first. It makes no claim about deployed usage and avoids credentials, hosted state, and environment-specific setup.

## Possible Extensions

- Add a short report command that prints the score breakdown for a single scenario.
- Add malformed input fixtures so the failure path is as visible as the happy path.
- Split the scoring constants into a typed configuration object and validate it before use.
- Add one more interpreters fixture that focuses on a malformed or borderline input.
