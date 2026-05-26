Esteban : Repo Maintainer; TechLead; ServerOwner
Pierre : AI Owner
Matéo : GUI Owner
Sejun : Developer
William : Developer

## Branch Strategy

The branches are all related to main which msut always be a deployable version.
So that we can keep a version for testing purposes, we don't need a dev branch because if we have an issue we pull the main locally and test on our features
This permit to control versioning and not create pull request for useless reasons.

The branches will be named after this pattern UseOfTheBranch/WhatIsChanger

One branch will be created per feature so that we keep the versioning clean.
If several features can't work without one another, then we still create one branch for each feature that we will then push in a special branch to merge these features before the main, after what it will be deleted.

Everyone will be able to merge a pull request as long as there is at least two reviews on the pull request and the user isn't the creator of the pull request.

## Commit Convention

Every commit will have to follow this commit norm : <type>(<scope>): <description>

The allowed types are the standardized types
The allowed scopes are: server, gui, ai, ci, docs and more detailled if possible (subdirectory or file affected)
Description is mandatory and in lowercase

Examples: Fix(Server): fixed authentication error
          Feat(GUI): add new sprites in the game
          Feat(AI): bot will look for food

## Setup

When cloning do repo, you will have to do these commands

npm init -y && npm install --save-dev @commitlint/cli @commitlint/config
-conventional husky

And execute this at the root of the repository

mkdir -p .git/hooks && cat > .git/hooks/commit-msg << 'EOF'
#!/bin/sh

ROOT="$(git rev-parse --show-toplevel)"
"$ROOT/node_modules/.bin/commitlint" --edit "$1"
EOF

chmod +x .git/hooks/commit-msg

## Review Process

Reviews must be done within 24h after the creation of the pull request during the week.
The reviewer will have to check the CI status, correctness, tyle, architecture alignment.
An approval will mean that the reviewer did not see any issue in the code and think that it is ready for merge.

A review marked as Approved will not have any comment in it as long as it should be perfect.

A review containing comments will then need changes.
As long as a review requesting changes will have comments so that the owner of the pull request will now where the issue is.

Once a pull request has 2 approved reviews, it has to be merged by the last approval.