//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface VCPRequestUpdateKeyFacesOfPersonsTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSArray *_personLocalIdentifiers;	// 16 = 0x10
    _Bool _forceUpdate;	// 24 = 0x18
    NSURL *_photoLibraryURL;	// 32 = 0x20
    CDUnknownBlockType _progressHandler;	// 40 = 0x28
    CDUnknownBlockType _reply;	// 48 = 0x30
    CDUnknownBlockType _cancelBlock;	// 56 = 0x38
}

+ (id)taskWithLocalIdentifiers:(id)arg1 andForceUpdate:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00200000000bbccb
- (void).cxx_destruct;	// IMP=0x00200000000bc22d
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x00100000000bc20c
- (int)run;	// IMP=0x00100000000bbfad
- (_Bool)isCanceled;	// IMP=0x00100000000bbf8e
- (void)cancel;	// IMP=0x00100000000bbf83
- (float)resourceRequirement;	// IMP=0x00100000000bbf75
- (void)dealloc;	// IMP=0x00100000000bbdae
- (id)initWithLocalIdentifiers:(id)arg1 andForceUpdate:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000bbbd9

@end
