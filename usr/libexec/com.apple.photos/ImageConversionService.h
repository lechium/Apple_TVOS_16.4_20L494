//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaConversionQueue, NSString, NSXPCListener;

@interface ImageConversionService : NSObject
{
    long long _pendingRequestCount;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    MediaConversionQueue *_requestQueue;	// 24 = 0x18
}

+ (void)run;	// IMP=0x0020000000016dc8
- (void).cxx_destruct;	// IMP=0x0020000000016d04
@property(retain) MediaConversionQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property long long pendingRequestCount; // @synthesize pendingRequestCount=_pendingRequestCount;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000169af
- (void)conversionQueueDidFinishProcessingEntry:(id)arg1;	// IMP=0x0010000000016847
- (void)conversionQueue:(id)arg1 processNextEntry:(id)arg2;	// IMP=0x00100000000161fa
- (id)urlCollectionForBookmarkDictionaryKey:(id)arg1 inOptions:(id)arg2 removeExistingEmptyFiles:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000015dc7
- (_Bool)convertImageWithOptions:(id)arg1 sourceURLCollection:(id)arg2 outputURLCollection:(id)arg3 outputData:(id *)arg4 outputFileType:(id *)arg5 outputImageInfo:(id *)arg6 error:(id *)arg7;	// IMP=0x0010000000014880
- (void)enumerateEnvironmentVariablePairsInRequestOptions:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000144c4
- (void)performEndRequestActionsForUnitTestSupportOptions:(id)arg1;	// IMP=0x001000000001442e
- (void)performBeginRequestActionsForUnitTestSupportOptions:(id)arg1;	// IMP=0x0010000000014326
- (void)decrementPendingRequestCountWithRequestIdentifier:(id)arg1;	// IMP=0x001000000001424f
- (void)replyToCompletionHandler:(CDUnknownBlockType)arg1 requestIdentifier:(id)arg2 resultData:(id)arg3 resultImageInformation:(id)arg4 signpostID:(unsigned long long)arg5 error:(id)arg6;	// IMP=0x001000000001416d
- (long long)incrementPendingRequestCountWithRequestIdentifier:(id)arg1;	// IMP=0x0010000000014087
- (_Bool)validatePhotosAdjustmentsCalculationRequestOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000013e6a
- (_Bool)validateRequestOptions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001395b
- (_Bool)setupSourceAndDestinationForRequestTracker:(id)arg1 imageConversionOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000013728
- (void)requestStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013649
- (void)convertImageWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e50
- (void)run;	// IMP=0x0010000000012d9b
- (id)init;	// IMP=0x0010000000012caa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

