//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetResourceManager.h>

@interface PHAssetResourceManager (MediaAnalysis)
+ (int)vcp_requestFileURLForAssetResource:(id)arg1 withTaskID:(unsigned long long)arg2 timeoutHandler:(CDUnknownBlockType)arg3 urlHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x006000000026652c
+ (int)vcp_requestFileURLForAssetResource:(id)arg1 withTaskID:(unsigned long long)arg2 toResourceURL:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x0060000000265bd1
+ (int)vcp_inMemoryDownload:(id)arg1 withTaskID:(unsigned long long)arg2 toData:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x006000000026521b
+ (void)vcp_reportDownload:(unsigned long long)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0060000000264f9e
@end
