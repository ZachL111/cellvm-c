# cellvm-c

`cellvm-c` is a compact C repository for interpreters, centered on this goal: Evaluate spreadsheet-style expressions with dependency diagnostics.

## Use Case

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Cellvm C Review Notes

Start with `runtime guard` and `stack movement`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Highlights

- `fixtures/domain_review.csv` adds cases for opcode pressure and stack movement.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/cellvm-c-walkthrough.md` walks through the case spread.
- The C code includes a review path for `runtime guard` and `stack movement`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Code Layout

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C code keeps the review rule close to the tests.

## Run The Check

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Regression Path

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Future Work

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
