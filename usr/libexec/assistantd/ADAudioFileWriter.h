//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSFileHandle, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ADAudioFileWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    struct OpaqueExtAudioFile *_audioFile;	// 40 = 0x28
    struct AudioStreamBasicDescription _asbd;	// 48 = 0x30
    NSFileHandle *_fileHandle;	// 88 = 0x58
    NSError *_underlyingError;	// 96 = 0x60
}

+ (id)_generateTemporaryFileURL;	// IMP=0x004000000008813f
+ (id)_savedAudioFilesDirectory;	// IMP=0x0010000000088135
- (void).cxx_destruct;	// IMP=0x0020000000089165
- (void)cancel;	// IMP=0x00100000000890e7
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088e28
- (void)appendAudioData:(id)arg1;	// IMP=0x0010000000088ca8
- (void)configureWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x00100000000887a1
- (void)_delete;	// IMP=0x00100000000886d6
- (void)_close;	// IMP=0x0010000000088679
- (void)dealloc;	// IMP=0x001000000008863b
- (id)init;	// IMP=0x001000000008862d
- (id)_initWithType:(long long)arg1 pathGenerator:(CDUnknownBlockType)arg2 xorFileHandle:(id)arg3 priority:(unsigned int)arg4;	// IMP=0x00100000000881c8
- (id)initWithType:(long long)arg1 fileHandle:(id)arg2 priority:(unsigned int)arg3;	// IMP=0x00100000000881ae
- (id)initWithType:(long long)arg1 pathGenerator:(CDUnknownBlockType)arg2 priority:(unsigned int)arg3;	// IMP=0x0010000000088196

@end

