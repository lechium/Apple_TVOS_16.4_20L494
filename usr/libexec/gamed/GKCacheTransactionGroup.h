//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKClientProxy, GKResourceManager, NSManagedObjectContext;

@interface GKCacheTransactionGroup
{
    NSManagedObjectContext *_context;	// 64 = 0x40
    GKClientProxy *_client;	// 72 = 0x48
    GKResourceManager *_resourceManager;	// 80 = 0x50
}

+ (id)transactionGroupWithContext:(id)arg1 resourceManager:(id)arg2 client:(id)arg3;	// IMP=0x004000000016f393
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x001000000016f27a
+ (id)dispatchGroup;	// IMP=0x001000000016f161
- (void).cxx_destruct;	// IMP=0x0020000000170f4e
@property(nonatomic) __weak GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) GKClientProxy *client; // @synthesize client=_client;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000170db2
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170c3d
- (void)stripGKPlayerInternalPIIs;	// IMP=0x001000000017085f
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000001706f0
- (void)readResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000170581
- (void)writeResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000017056f
- (void)performAndJoinForResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001702ba
- (void)performOnManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x001000000016ffa4
- (void)dealloc;	// IMP=0x001000000016fc16
- (id)initWithName:(id)arg1 context:(id)arg2 resourceManager:(id)arg3 client:(id)arg4;	// IMP=0x001000000016f8d2
- (id)initWithName:(id)arg1;	// IMP=0x001000000016f7b0
- (id)transactionGroup;	// IMP=0x001000000016f665

@end

