//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEONanoInfo : NSObject
{
    _Bool _nanoRegEntitled;	// 8 = 0x8
}

+ (id)sharedInfo;	// IMP=0x006000000033b24a
- (id)deviceProductTypeIfAvailable;	// IMP=0x000000000033b3c2
- (id)deviceProductType;	// IMP=0x000000000033b3ab
- (id)_deviceProductTypeBlocking:(_Bool)arg1;	// IMP=0x000000000033b3a3
- (id)deviceSystemBuildVersionIfAvailable;	// IMP=0x000000000033b38f
- (id)deviceSystemBuildVersion;	// IMP=0x000000000033b378
- (id)_deviceSystemBuildVersionBlocking:(_Bool)arg1;	// IMP=0x000000000033b370
- (id)deviceSystemVersionIfAvailable;	// IMP=0x000000000033b35c
- (id)deviceSystemVersion;	// IMP=0x000000000033b345
- (id)_deviceSystemVersionBlocking:(_Bool)arg1;	// IMP=0x000000000033b33d
- (id)hasPairedDeviceIfAvailable;	// IMP=0x000000000033b329
- (id)hasPairedDevice;	// IMP=0x000000000033b312
- (id)_hasPairedDeviceBlocking:(_Bool)arg1;	// IMP=0x000000000033b30a
- (id)init;	// IMP=0x000000000033b21b
- (id)deviceOsVersionIfAvailable;	// IMP=0x0000000000dd9b21

@end
