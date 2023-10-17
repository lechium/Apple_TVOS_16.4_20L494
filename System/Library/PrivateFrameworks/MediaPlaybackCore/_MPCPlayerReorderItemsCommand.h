//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerReorderItemsCommand
{
}

- (id)moveItem:(id)arg1 beforeItem:(id)arg2;	// IMP=0x0000000000295591
- (id)moveItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x00000000002951a0
- (id)limitedDisplayIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;	// IMP=0x0000000000294cf5
- (id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;	// IMP=0x0000000000294b3b
- (_Bool)canMoveItem:(id)arg1;	// IMP=0x0000000000294a57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
