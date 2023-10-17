//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSURL;

__attribute__((visibility("hidden")))
@interface SKDownloadChangeset : NSObject
{
    NSNumber *_contentLength;	// 8 = 0x8
    NSURL *_contentURL;	// 16 = 0x10
    NSNumber *_downloadID;	// 24 = 0x18
    NSNumber *_downloadState;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSNumber *_progress;	// 48 = 0x30
    NSNumber *_timeRemaining;	// 56 = 0x38
}

+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;	// IMP=0x0010000000006ecd
- (void).cxx_destruct;	// IMP=0x0000000000007400
@property(copy, nonatomic) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(copy, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSNumber *downloadState; // @synthesize downloadState=_downloadState;
@property(copy, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007234
- (id)copyXPCEncoding;	// IMP=0x0000000000007177
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000006f6b

@end

