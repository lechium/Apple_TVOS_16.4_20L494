//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode
{
    NSMutableArray *_childNodes;	// 24 = 0x18
}

- (void)_removeChildRuleNode:(id)arg1;	// IMP=0x00000000000182c8
- (void)_addChildRuleNode:(id)arg1;	// IMP=0x00000000000182a1
@property(readonly, copy) NSArray *_childRuleNodes;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x000000000001806d

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

