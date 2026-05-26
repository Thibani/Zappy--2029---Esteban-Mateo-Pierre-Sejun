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

Everyone will be able to merge on the main as long as there is at least one review on the pull request.

