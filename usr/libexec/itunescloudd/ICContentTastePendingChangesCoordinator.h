//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ICContentTastePendingChangesCoordinator : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_pendingChangesPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ICConnectionConfiguration *_configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000067c63
- (_Bool)_savePendingChanges:(id)arg1;	// IMP=0x0010000000067a3f
- (id)_pendingChanges;	// IMP=0x001000000006763f
- (void)_removePendingChangesForContentTasteUpdateOperation:(id)arg1;	// IMP=0x00100000000672e6
- (void)_addPendingChangesForContentTasteUpdateOperation:(id)arg1 invalidateLocalCache:(_Bool)arg2;	// IMP=0x0010000000066d95
- (id)description;	// IMP=0x0010000000066ccf
- (void)removePendingChanges;	// IMP=0x0010000000066c84
@property(readonly, nonatomic) NSArray *pendingChanges;
- (void)contentTasteUpdateOperation:(id)arg1 finishedByInvalidatingCache:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000066a72
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000006676a

@end

