# PS3 AI — cloud-build source starter

Target: PlayStation 3 HEN 4.92. Build host: GitHub Actions (Ubuntu runner + Docker).

## What this revision does
- Provides a PSL1GHT project Makefile.
- Builds the PS3 PPU executable and attempts to package `PS3_AI.pkg`.
- Runs the PS3 toolchain in a Docker image built from the `ps3dev/ps3dev-docker` project.
- Uploads the resulting package as a GitHub Actions artifact.

## Honest status
This is a **native homebrew build starter / smoke-test shell**, not the finished AI assistant. The current `src/main.c` only registers the PS3 exit callback and keeps the process alive. It does not yet draw the chat interface, read controller text input, make HTTPS requests, or call an AI provider. Those features require additional PS3 graphics/input/network implementation and testing on real hardware.

The package build itself must be verified in the Actions log. A successful compiler run does not prove HEN 4.92 runtime compatibility; install and test on the user's own console before calling it release-ready.

## Add to your existing GitHub repository
Upload/merge the contents of this ZIP into the **root** of `kingmimi950-cyber/Ps3-ai`, keeping the `.github/workflows` folder.

## Run the cloud build
1. Open the repository on GitHub.
2. Open **Actions**.
3. Select **PS3 AI — Build PKG**.
4. Press **Run workflow**.
5. Open the completed run and download the `PS3_AI-PKG` artifact.

The workflow also runs on pushes to `main` or `master` when relevant project files change.

## Toolchain references
- PSL1GHT SDK: https://github.com/ps3dev/PSL1GHT
- PS3DEV Docker builder: https://github.com/ps3dev/ps3dev-docker

## Package identity
- Title: PS3 AI
- APPID: PSAI00001
- Content ID: UP0001-PSAI00001_00-0000000000000000

Do not put provider API keys in this repository or inside a PKG. A later AI backend must keep credentials server-side.
