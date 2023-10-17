//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNSiriContactContextProvider : NSObject
{
    CNContact *_contact;	// 8 = 0x8
    CNContactStore *_store;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a6aae
- (void)_removeContextProviderOnMainThread;	// IMP=0x00000000000a6a62
- (id)contextManager;	// IMP=0x00000000000a69cb
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000a6963
- (id)getCurrentContext;	// IMP=0x00000000000a6812
- (_Bool)allowContextProvider:(id)arg1;	// IMP=0x00000000000a680a
- (void)dealloc;	// IMP=0x00000000000a6771
- (id)initWithContact:(id)arg1 store:(id)arg2;	// IMP=0x00000000000a667b

@end

