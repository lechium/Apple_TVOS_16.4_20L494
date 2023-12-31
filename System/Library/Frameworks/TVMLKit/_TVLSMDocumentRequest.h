//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString, NSURL, NSURLSession, _TVStackedMediaDocument;

__attribute__((visibility("hidden")))
@interface _TVLSMDocumentRequest : NSObject
{
    int _documentState;	// 8 = 0x8
    int _loadingState;	// 12 = 0xc
    float _priority;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURL *_previewURL;	// 32 = 0x20
    _TVStackedMediaDocument *_lsmDocument;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    NSString *_cachePrefix;	// 56 = 0x38
    NSURLSession *_session;	// 64 = 0x40
    NSMutableArray *_tasks;	// 72 = 0x48
    CDUnknownBlockType _completion;	// 80 = 0x50
}

+ (id)_prefixForString:(id)arg1;	// IMP=0x0060000000194d52
+ (id)_cachePath;	// IMP=0x0060000000194cf6
- (void).cxx_destruct;	// IMP=0x0000000000196719
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *cachePrefix; // @synthesize cachePrefix=_cachePrefix;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) _TVStackedMediaDocument *lsmDocument; // @synthesize lsmDocument=_lsmDocument;
@property(nonatomic) float priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)_cachePathForCacheKey:(id)arg1;	// IMP=0x00000000001965df
- (id)_cacheKeyForFileName:(id)arg1;	// IMP=0x000000000019655c
- (id)_lsmDocumentWithContentsInCache;	// IMP=0x00000000001964c7
- (void)_loadDocumentFromCache;	// IMP=0x0000000000196342
- (void)_loadDataAtURL:(id)arg1 withFilename:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001962b1
- (void)_loadDataAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001961f9
- (void)_loadFileNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000196117
- (void)_loadAssetWithCacheKey:(id)arg1 completion:(CDUnknownBlockType)arg2 url:(id)arg3;	// IMP=0x0000000000195a9f
- (void)_didEndLoading:(_Bool)arg1;	// IMP=0x00000000001958cd
- (void)_loadEntries;	// IMP=0x00000000001950a2
- (void)_loadManifest;	// IMP=0x0000000000194ec2
- (void)cancel;	// IMP=0x0000000000194cda
- (void)loadWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000194c15
@property(readonly) _Bool requiresLoading;
@property(readonly) _Bool isLoading;
- (id)initWithURL:(id)arg1 previewURL:(id)arg2;	// IMP=0x0000000000194941
- (id)initWithURL:(id)arg1;	// IMP=0x000000000019492d

@end

