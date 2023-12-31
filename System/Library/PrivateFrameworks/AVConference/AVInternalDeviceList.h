//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType changeListener;	// 8 = 0x8
    NSMutableArray *deviceList;	// 16 = 0x10
    struct _opaque_pthread_mutex_t listLock;	// 24 = 0x18
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;	// IMP=0x006000000026b3e0
+ (id)newDeviceList;	// IMP=0x006000000026b3d8
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;	// IMP=0x000000000026b9fb
- (void)notifyDeviceListChanged;	// IMP=0x000000000026b6c4
- (void)dealloc;	// IMP=0x000000000026b64e
- (void)cleanup;	// IMP=0x000000000026b648
- (id)init;	// IMP=0x000000000026b5bb
- (unsigned int)dataSourceControlID;	// IMP=0x000000000026b3ec

@end

