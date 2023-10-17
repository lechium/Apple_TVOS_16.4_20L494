//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangeHistoryEventFactory, CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryResultEventConverter : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSArray *_additionalContactKeyDescriptors;	// 16 = 0x10
    CNChangeHistoryEventFactory *_factory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000389f5
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly, copy) NSArray *additionalContactKeyDescriptors; // @synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors;
@property(readonly) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)eventsFromResult:(id)arg1;	// IMP=0x0000000000037a7b
- (id)initWithContactStore:(id)arg1 additionalContactKeyDescriptors:(id)arg2;	// IMP=0x00000000000379ad

@end
