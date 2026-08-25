# pokemon-shinykrabby

This repo is a port of the ShinyKrabby ROM hack (a custom Pokémon fangame, region
"Tessera") onto the `pokehns-expansion` ("Heart and Soul" / HNS) engine base. Build
with `make sk -j24`.

**Before doing any non-trivial work here, read [SESSION_LOG.md](SESSION_LOG.md).** It
covers the full porting history, what's been done, and several non-obvious gotchas
(a porymap tileset-boundary toggle mechanism, a recurring "gitignored asset with no
real source" bug pattern, and more) that are easy to re-break without that context.

The sibling directory `pokemon-shinykrabby(OLD)` is the original ShinyKrabby source
(plain pokeemerald-expansion, no HNS) — the primary reference for "what did this
content/text/art originally look like" whenever something in this port seems off,
missing, or half-finished.
