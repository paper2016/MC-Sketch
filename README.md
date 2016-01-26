# MC Sketch

## Introduction

A **sketch** is a probabilistic data structure that is used to record frequencies of different items in a multi-set.
Various types of sketches have been proposed in the literature and applied in a variety of fields, such as natural language processing, compressed sensing, network traffic analysis, and distributed data sets.
While several variants of sketches have been proposed in the past, the existing sketches cannot improve the accuracy of the CM sketch while keeping the update ability.
Here, we propose a new sketch, ***the MC sketch***, that has significantly higher accuracy compared to prior art, while keeping the query speed and update speed unchanged.


## Building

    $ sh build.sh
    
There is a little example in `main.c`, which shows the basic usage of ***the MC sketch***. 
We also implement a series of sketches that lead to our final ***MC sketch***. They are **slim-fat sketches**. Using `sh build.sh SF1` for our first version of **slim-fat sketch**.

## Usage

		$ ./bin/mcsketch

We should feed two files to `mcsketch`. They are for insertion and deletion operations on items and query for them.
Note that we can apply insertion/deletion many times on a specific item. 
Item's frequency can be defined as # of insertions minus # of deletions.
The default file name for operations is "operations.dat", while "queries.dat" for query. 
In `./workingset`, we prepare one example for using those sketches for you, which apply 10K operations on 1K distinct key-value items. 
And "kv1K_op10K.bench" indicating real frequencies for items is shown in the folder `./workingset`. 
More complex method in using `mcsketch` can be found out by `./bin/mcsketch -h` 