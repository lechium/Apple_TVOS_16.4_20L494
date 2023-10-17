//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface MIContainerLinkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSMutableDictionary *_parentToLinkedChildrenMap;	// 16 = 0x10
    NSSet *_linkedParentBundleIDs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000029d5
- (void).cxx_destruct;	// IMP=0x0020000000004ed6
@property(retain, nonatomic) NSSet *linkedParentBundleIDs; // @synthesize linkedParentBundleIDs=_linkedParentBundleIDs;
@property(retain, nonatomic) NSMutableDictionary *parentToLinkedChildrenMap; // @synthesize parentToLinkedChildrenMap=_parentToLinkedChildrenMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (_Bool)removeParent:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000004c96
- (_Bool)_onQueue_removeParent:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000004a9a
- (id)childrenForParentBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000047c6
- (id)_onQueue_childrenForParentBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000044ff
- (_Bool)getLinkedParent:(id *)arg1 forChild:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000004355
- (_Bool)unlinkChild:(id)arg1 fromParent:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000004118
- (_Bool)linkChild:(id)arg1 toParent:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000003ede
- (_Bool)preflightLinkingChild:(id)arg1 toParent:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000003c3a
- (_Bool)_onQueue_updateLinkForParent:(id)arg1 toChild:(id)arg2 operationType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000000034b0
- (_Bool)_onQueue_isValidLinkForParent:(id)arg1 toChild:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000032eb
- (_Bool)_onQueue_setLinkedParentBundleIDList:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003071
- (id)_onQueue_linkedParentBundleIDs:(id *)arg1;	// IMP=0x0010000000002a62
- (id)init;	// IMP=0x00100000000027db
- (void)_onQueue_migratePlaygroundsBundleMetadata;	// IMP=0x0010000000001fe0

@end
