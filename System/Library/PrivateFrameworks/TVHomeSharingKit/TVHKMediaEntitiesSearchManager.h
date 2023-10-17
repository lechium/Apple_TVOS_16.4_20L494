//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, TVHKMediaEntitiesSearchCache, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesSearchManager : NSObject
{
    TVHKMediaLibraryRequestSession *_requestSession;	// 8 = 0x8
    TVHKMediaLibrarySessionState *_sessionState;	// 16 = 0x10
    NSOperationQueue *_serialOperationQueue;	// 24 = 0x18
    TVHKMediaEntitiesSearchCache *_cache;	// 32 = 0x20
}

+ (id)new;	// IMP=0x0060000000049f93
- (void).cxx_destruct;	// IMP=0x000000000004a791
@property(retain, nonatomic) TVHKMediaEntitiesSearchCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(copy, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
- (void)sessionStateDidChange:(id)arg1;	// IMP=0x000000000004a715
- (id)enqueueSearchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a2a6
- (void)warmdown;	// IMP=0x000000000004a18b
- (void)warmup;	// IMP=0x000000000004a185
- (void)dealloc;	// IMP=0x000000000004a11a
- (id)initWithMediaServerIdentifier:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000004a031
- (id)init;	// IMP=0x0000000000049fc2

@end
