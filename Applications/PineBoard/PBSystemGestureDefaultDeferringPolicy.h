//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBSystemGestureDefaultDeferringPolicy : NSObject
{
    CDUnknownBlockType _recipeProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000097340
@property(readonly, nonatomic) CDUnknownBlockType recipeProvider; // @synthesize recipeProvider=_recipeProvider;
- (id)deferredTargetSystemGestureUsingCandidateTypeEnumerator:(id)arg1 selectionPolicy:(id)arg2;	// IMP=0x0010000000097274
- (id)initWithRecipeProvider:(CDUnknownBlockType)arg1;	// IMP=0x0010000000097201

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

