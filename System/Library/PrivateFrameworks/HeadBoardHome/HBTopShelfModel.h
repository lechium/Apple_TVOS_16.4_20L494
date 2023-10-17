//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TVTopShelfContent;

__attribute__((visibility("hidden")))
@interface HBTopShelfModel : NSObject
{
    id <TVTopShelfContent> _topShelfContent;	// 8 = 0x8
    NSString *_applicationIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000030189
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) id <TVTopShelfContent> topShelfContent; // @synthesize topShelfContent=_topShelfContent;
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x0000000000030099
- (void)_removedFromController;	// IMP=0x0000000000030093
- (void)_addedToController;	// IMP=0x000000000003008d
@property(readonly, copy, nonatomic) NSString *_logSafeDescription;
- (id)_logSafeDescriptionBuilder;	// IMP=0x000000000002ffb8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002ff66
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002fe77
- (id)succinctDescriptionBuilder;	// IMP=0x000000000002fe63
- (id)succinctDescription;	// IMP=0x000000000002fe13
@property(readonly, copy) NSString *description;
- (id)initWithApplicationIdentifier:(id)arg1 topShelfContent:(id)arg2;	// IMP=0x000000000002fd5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

