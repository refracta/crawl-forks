#!/bin/sh

RCDIR=/home/crawl/rcs/gnollcrawl/$1
INPROGRESSDIR=/home/crawl/inprogress/gnollcrawl/$1/running
TTYRECDIR=/home/crawl/rcs/gnollcrawl/$1/ttyrecs

YRCDIR=/home/crawl/rcs/yiufcrawl/$1
YINPROGRESSDIR=/home/crawl/inprogress/yiufcrawl/$1/running
YTTYRECDIR=/home/crawl/rcs/yiufcrawl/$1/ttyrecs

CRCDIR=/home/crawl/rcs/dcssca/$1
CINPROGRESSDIR=/home/crawl/inprogress/dcssca/$1/running
CTTYRECDIR=/home/crawl/rcs/dcssca/$1/ttyrecs

HRCDIR=/home/crawl/rcs/hellcrawl/$1
HINPROGRESSDIR=/home/crawl/inprogress/hellcrawl/$1/running
HTTYRECDIR=/home/crawl/rcs/hellcrawl/$1/ttyrecs

LRCDIR=/home/crawl/rcs/crawllight/$1
LINPROGRESSDIR=/home/crawl/inprogress/crawllight/$1/running
LTTYRECDIR=/home/crawl/rcs/crawllight/$1/ttyrecs

ORCDIR=/home/crawl/rcs/oofcrawl/$1
OINPROGRESSDIR=/home/crawl/inprogress/oofcrawl/$1/running
OTTYRECDIR=/home/crawl/rcs/oofcrawl/$1/ttyrecs

LIRCDIR=/home/crawl/rcs/lichcrawl/$1
LIINPROGRESSDIR=/home/crawl/inprogress/lichcrawl/$1/running
LITTYRECDIR=/home/crawl/rcs/lichcrawl/$1/ttyrecs

BRCDIR=/home/crawl/rcs/boggartcrawl/$1
BINPROGRESSDIR=/home/crawl/inprogress/boggartcrawl/$1/running
BTTYRECDIR=/home/crawl/rcs/boggartcrawl/$1/ttyrecs

DEFAULT_RC=../settings/init.txt
PLAYERNAME=$1

mkdir -p $RCDIR
mkdir -p $INPROGRESSDIR
mkdir -p $TTYRECDIR
mkdir -p $YRCDIR
mkdir -p $YINPROGRESSDIR
mkdir -p $YTTYRECDIR
mkdir -p $CRCDIR
mkdir -p $CINPROGRESSDIR
mkdir -p $CTTYRECDIR
mkdir -p $HRCDIR
mkdir -p $HINPROGRESSDIR
mkdir -p $HTTYRECDIR
mkdir -p $LRCDIR
mkdir -p $LINPROGRESSDIR
mkdir -p $LTTYRECDIR
mkdir -p $ORCDIR
mkdir -p $OINPROGRESSDIR
mkdir -p $OTTYRECDIR
mkdir -p $LIRCDIR
mkdir -p $LIINPROGRESSDIR
mkdir -p $LITTYRECDIR
mkdir -p $BRCDIR
mkdir -p $BINPROGRESSDIR
mkdir -p $BTTYRECDIR

if [ ! -f ${RCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${RCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${YRCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${YRCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${CRCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${CRCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${HRCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${HRCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${LRCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${LRCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${ORCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${ORCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${LIRCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${LIRCDIR}/${PLAYERNAME}.rc
fi
if [ ! -f ${BRCDIR}/${PLAYERNAME}.rc ]; then
    cp ${DEFAULT_RC} ${BRCDIR}/${PLAYERNAME}.rc
fi
