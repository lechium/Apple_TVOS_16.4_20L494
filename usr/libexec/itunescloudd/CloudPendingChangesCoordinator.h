//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSString;
@protocol OS_dispatch_queue;

@interface CloudPendingChangesCoordinator : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_pendingChangesPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    Class _loggable;	// 32 = 0x20
    ICConnectionConfiguration *_configuration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c62b2
@property(readonly, copy, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)_savePendingChanges:(id)arg1;	// IMP=0x00100000000c608f
- (id)_pendingChanges;	// IMP=0x00100000000c5d84
- (void)removeAllPendingChanges;	// IMP=0x00100000000c5d70
- (void)removeAllPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c5bb7
- (void)processPendingChangesUsingLibrary:(id)arg1;	// IMP=0x00100000000c59cc
- (void)addPendingChange:(id)arg1;	// IMP=0x00100000000c57fd
- (id)initWithConfiguration:(id)arg1 prefix:(id)arg2 loggable:(Class)arg3;	// IMP=0x00100000000c54dc

@end

