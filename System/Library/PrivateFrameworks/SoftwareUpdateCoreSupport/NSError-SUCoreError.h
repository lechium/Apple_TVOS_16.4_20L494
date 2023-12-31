//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (SUCoreError)
+ (id)_buildCheckedErrorForDomain:(id)arg1 withCode:(long long)arg2 safeUnderlying:(id)arg3 description:(id)arg4;	// IMP=0x0050000000020024
+ (long long)_checkedDepthCount:(id)arg1;	// IMP=0x005000000001ff19
+ (_Bool)_checkedIsSafeUserInfo:(id)arg1;	// IMP=0x005000000001f4c5
+ (id)buildCheckedError:(id)arg1;	// IMP=0x005000000001f23f
+ (id)buildAndLogCheckedSUCoreError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;	// IMP=0x005000000001f13f
+ (id)buildCheckedSUCoreError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;	// IMP=0x005000000001f0a5
- (id)_errorInStackOfLayer:(long long)arg1;	// IMP=0x001000000001f063
- (long long)_errorInStackLayer;	// IMP=0x001000000001f047
- (long long)_checkedIndicationsMatching:(long long)arg1;	// IMP=0x001000000001ee75
- (id)_deepestWithLayer;	// IMP=0x001000000001ed9c
- (id)_checkedStackErrorAtDepth:(long long)arg1;	// IMP=0x001000000001ec71
- (_Bool)_checkedIsSafe:(_Bool)arg1;	// IMP=0x001000000001eb3f
- (id)checkedDescription;	// IMP=0x001000000001e705
- (id)checkedSummary;	// IMP=0x001000000001e2f4
- (id)checkedNameForCode;	// IMP=0x001000000001e251
- (id)checkedForDepthIndex:(long long)arg1;	// IMP=0x001000000001e10b
- (long long)checkedDepthCount;	// IMP=0x001000000001e003
- (id)checkedIndicationsDescription;	// IMP=0x001000000001decf
- (id)checkedIndicationsSummary;	// IMP=0x001000000001dd6f
- (long long)checkedIndicationsMatchingMask:(long long)arg1;	// IMP=0x001000000001db9d
- (long long)checkedIndications;	// IMP=0x001000000001d9d1
- (unsigned long long)checkedSystemPartitionSize;	// IMP=0x001000000001d94c
- (id)checkedUserInfo;	// IMP=0x001000000001d8f3
- (id)checkedDomain;	// IMP=0x001000000001d89a
- (long long)checkedCode;	// IMP=0x001000000001d849
- (id)checkedOfLayer:(long long)arg1;	// IMP=0x001000000001d780
- (long long)checkedLayer;	// IMP=0x001000000001d730
@end

