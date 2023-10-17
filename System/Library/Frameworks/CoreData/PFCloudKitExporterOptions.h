//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabase, NSCloudKitMirroringDelegateOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitExporterOptions : NSObject
{
    CKDatabase *_database;	// 8 = 0x8
    NSCloudKitMirroringDelegateOptions *_mirroringDelegateOptions;	// 16 = 0x10
    unsigned long long _perOperationBytesThreshold;	// 24 = 0x18
    unsigned long long _perOperationObjectThreshold;	// 32 = 0x20
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024c662
- (id)copy;	// IMP=0x000000000024c619
- (void)dealloc;	// IMP=0x000000000024c5c0
- (id)initWithDatabase:(id)arg1 options:(id)arg2;	// IMP=0x000000000024c54c

@end

