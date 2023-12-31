//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerResponseTracklistDataSource : NSObject
{
    MPCPlayerResponse *_response;	// 8 = 0x8
    NSIndexPath *_playingItemIndexPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000297725
@property(retain, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000297527
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x0000000000297490
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029732f
- (unsigned long long)numberOfSections;	// IMP=0x000000000029729e
- (id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2;	// IMP=0x000000000029720c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

