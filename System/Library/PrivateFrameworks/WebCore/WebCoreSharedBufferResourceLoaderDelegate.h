//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject
{
    void *_parent;	// 8 = 0x8
    long long _expectedContentSize;	// 16 = 0x10
    struct RetainPtr<NSData> _data;	// 24 = 0x18
    _Bool _complete;	// 32 = 0x20
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _requests;	// 40 = 0x28
    struct Lock _dataLock;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000aabfd0
- (void).cxx_destruct;	// IMP=0x0000000000aabf30
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;	// IMP=0x0000000000aabc80
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000aabbb0
- (void)fulfillRequest:(id)arg1;	// IMP=0x0000000000aab970
- (void)fulfillPendingRequests;	// IMP=0x0000000000aab680
- (void)enqueueRequest:(id)arg1;	// IMP=0x0000000000aab550
- (_Bool)canFulfillRequest:(id)arg1;	// IMP=0x0000000000aab4b0
- (void)updateData:(id)arg1 complete:(_Bool)arg2;	// IMP=0x0000000000aab400
- (void)setExpectedContentSize:(long long)arg1;	// IMP=0x0000000000aab370
@property(readonly) NSData *data;
- (id)initWithParent:(void *)arg1;	// IMP=0x0000000000aab320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

