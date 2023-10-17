//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, NSDictionary, NSString, NSURL;
@protocol GEOMAResourceInfo;

@interface GEOMAResource : NSObject
{
    MAAsset *_asset;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
    NSURL *_cacheURL;	// 24 = 0x18
    id <GEOMAResourceInfo> _info;	// 32 = 0x20
}

+ (void)onFileAccessQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x00400000000242f9
+ (void)onFileAccessQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000242a9
+ (_Bool)_removeResourceAt:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002405d
+ (_Bool)removeResourceAt:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000023dd5
- (void).cxx_destruct;	// IMP=0x0020000000024371
@property(readonly) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly) id <GEOMAResourceInfo> resourceInfo; // @synthesize resourceInfo=_info;
- (id)description;	// IMP=0x00100000000241b0
- (_Bool)remove:(id *)arg1;	// IMP=0x0010000000023d72
- (void)_relocateOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002348c
- (void)downloadWithOptions:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022f09
- (void)downloadWithOptions:(id)arg1;	// IMP=0x0010000000022ef2
- (unsigned long long)hash;	// IMP=0x0010000000022eae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000022e00
- (long long)compare:(id)arg1;	// IMP=0x0010000000022c59
@property(readonly, nonatomic) NSString *contentVersion;
- (unsigned long long)size;	// IMP=0x0010000000022b8d
- (id)getLocalFileUrl;	// IMP=0x0010000000022b21
- (id)_getPlistURL;	// IMP=0x0010000000022aca
- (id)_getLocalFileUrl;	// IMP=0x0010000000022a2a
@property(readonly) long long state;
@property(readonly, getter=isOnDisk) _Bool onDisk;
@property(readonly, getter=isAvailableForUse) _Bool availableForUse;
@property(readonly, nonatomic) NSString *assetId;
- (id)initWithResourceFolder:(id)arg1 info:(id)arg2;	// IMP=0x00100000000226c4
- (id)initWithMobileAsset:(id)arg1 info:(id)arg2;	// IMP=0x00100000000225f1

@end
