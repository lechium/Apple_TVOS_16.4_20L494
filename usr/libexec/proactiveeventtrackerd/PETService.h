//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString, PETEventTracker2;
@protocol OS_dispatch_queue;

@interface PETService : NSObject
{
    PETEventTracker2 *_tracker;	// 8 = 0x8
    _Bool _isInternalDevice;	// 16 = 0x10
    IDSService *_idsService;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsQueue;	// 32 = 0x20
}

+ (void)clearAllLogs;	// IMP=0x002000000000ee21
+ (void)updateMobileAssetMetadataWithXPCActivity:(id)arg1;	// IMP=0x001000000000eca8
- (void).cxx_destruct;	// IMP=0x002000000000e8c0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // @synthesize idsQueue=_idsQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000000e5a3
- (void)_uploadWithUploadPackage:(id)arg1;	// IMP=0x001000000000e30d
- (void)_uploadToParsecWithUpload:(id)arg1;	// IMP=0x001000000000e307
- (void)_uploadToFBFv2WithUpload:(id)arg1;	// IMP=0x001000000000e143
- (_Bool)_writeUploadForTransparency:(id)arg1;	// IMP=0x001000000000e13b
- (void)upload;	// IMP=0x001000000000dfd2
- (id)init;	// IMP=0x001000000000de81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

