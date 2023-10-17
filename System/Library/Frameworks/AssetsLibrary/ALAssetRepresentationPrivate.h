//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ALAssetsLibrary, NSString, PLManagedAsset, PLPhotoLibrary;
@protocol PLSidecar;

__attribute__((visibility("hidden")))
@interface ALAssetRepresentationPrivate : NSObject
{
    ALAssetsLibrary *_library;	// 8 = 0x8
    _Bool _isValid;	// 16 = 0x10
    PLManagedAsset *_photo;	// 24 = 0x18
    id <PLSidecar> _sidecar;	// 32 = 0x20
    NSString *_extension;	// 40 = 0x28
    PLPhotoLibrary *_photoLibrary;	// 48 = 0x30
}

+ (void)_clearFileDescriptorQueue;	// IMP=0x001000000000b809
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;	// IMP=0x001000000000b5fb
+ (int)_fileDescriptorForPersistentURL:(id)arg1;	// IMP=0x001000000000b4cf
+ (void)_setupFileDescriptorQueue;	// IMP=0x001000000000b435
- (void).cxx_destruct;	// IMP=0x000000000000b27b
@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <PLSidecar> sidecar; // @synthesize sidecar=_sidecar;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b023
- (_Bool)_isVideo;	// IMP=0x000000000000af80
- (_Bool)_isImage;	// IMP=0x000000000000aedd
- (void)libraryDidChange;	// IMP=0x000000000000aec9
@property(nonatomic) ALAssetsLibrary *library;
- (void)dealloc;	// IMP=0x000000000000ae2c
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;	// IMP=0x000000000000ad7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

