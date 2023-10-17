//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AKAuthorizationIconManager : NSObject
{
    struct os_unfair_lock_s _dataBlocksLock;	// 8 = 0x8
    NSMutableDictionary *_dataBlocks;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0040000000002476
- (void).cxx_destruct;	// IMP=0x0020000000003434
- (void)_removeDataBlockForKey:(id)arg1;	// IMP=0x0010000000003383
- (void)_setDataBlock:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000325c
- (id)_dataBlockForKey:(id)arg1;	// IMP=0x001000000000316e
- (id)_serviceIDForRequestContext:(id)arg1;	// IMP=0x00100000000030c0
- (_Bool)_isFetchingIconWithRequestContext:(id)arg1;	// IMP=0x0010000000003058
- (id)_startFetchingIconForBundleID:(id)arg1 size:(id)arg2 scale:(id)arg3;	// IMP=0x0010000000002d27
- (void)continueFetchingIconWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002bca
- (void)setFetchIconBlockForPresenter:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000002808
- (void)startFetchingIconWithRequestContext:(id)arg1;	// IMP=0x00100000000024cb
- (id)init;	// IMP=0x001000000000243b

@end
