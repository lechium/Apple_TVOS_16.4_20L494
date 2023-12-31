//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebGeolocationPolicyDecider : NSObject
{
    struct RetainPtr<NSObject<OS_dispatch_queue>*> _diskDispatchQueue;	// 8 = 0x8
    struct RetainPtr<NSMutableDictionary> _sites;	// 16 = 0x10
    struct Deque<std::unique_ptr<PermissionRequest>, 0UL> _challenges;	// 24 = 0x18
    struct unique_ptr<PermissionRequest, std::default_delete<PermissionRequest>> _activeChallenge;	// 56 = 0x38
}

+ (id)sharedPolicyDecider;	// IMP=0x0060000000377a78
- (id).cxx_construct;	// IMP=0x0000000000378cdc
- (void).cxx_destruct;	// IMP=0x0000000000378bbc
- (void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3;	// IMP=0x0000000000378ace
- (long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;	// IMP=0x00000000003789de
- (void)_save;	// IMP=0x000000000037890a
- (void)_loadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003785c4
- (id)_siteFile;	// IMP=0x000000000037857b
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(_Bool)arg2;	// IMP=0x0000000000378509
- (void)clearCache;	// IMP=0x0000000000378454
- (void)_finishActiveChallenge:(_Bool)arg1;	// IMP=0x00000000003783fa
- (void)_executeNextChallenge;	// IMP=0x0000000000377de9
- (void)decidePolicyForGeolocationRequestFromOrigin:(const void *)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4;	// IMP=0x0000000000377b7f
- (void)dealloc;	// IMP=0x0000000000377b35
- (id)init;	// IMP=0x0000000000377a9d

@end

