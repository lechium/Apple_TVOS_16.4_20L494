//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerChangeItemCommand
{
    unsigned long long _changeItemSupport;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long changeItemSupport; // @synthesize changeItemSupport=_changeItemSupport;
- (id)changeToItem:(id)arg1;	// IMP=0x000000000029399a
- (id)changeToSection:(id)arg1;	// IMP=0x0000000000293992
- (id)nextChapter;	// IMP=0x00000000002938a1
- (id)nextSection;	// IMP=0x00000000002937b0
- (id)nextItem;	// IMP=0x00000000002935fe
- (id)previousChapter;	// IMP=0x000000000029350d
- (id)previousSection;	// IMP=0x000000000029341c
- (id)previousItemDeferringToPlaybackQueuePosition;	// IMP=0x00000000002932b2
- (id)previousItem;	// IMP=0x0000000000293100
- (id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2;	// IMP=0x00000000002930bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

