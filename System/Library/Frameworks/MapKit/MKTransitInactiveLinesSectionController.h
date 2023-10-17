//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface MKTransitInactiveLinesSectionController
{
    id <GEOTransitLine> _line;	// 56 = 0x38
    NSArray *_inactiveLines;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000087972
- (_Bool)_newStationCardUIEnabled;	// IMP=0x000000000008796a
- (void)_buildRows;	// IMP=0x000000000008711c
- (void)_setNeedsBuildRows;	// IMP=0x00000000000870d2
- (id)_pagingFilter;	// IMP=0x0000000000087087
@property(readonly, nonatomic) NSArray *inactiveLines; // @synthesize inactiveLines=_inactiveLines;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 line:(id)arg3;	// IMP=0x0000000000086fc5
- (id)init;	// IMP=0x0000000000086f9b

@end

