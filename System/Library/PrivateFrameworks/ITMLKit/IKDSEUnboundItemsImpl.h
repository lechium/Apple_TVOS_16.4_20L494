//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKChangeSet, IKDataSourceElement, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKDSEUnboundItemsImpl : NSObject
{
    IKDataSourceElement *_dataSourceElement;	// 8 = 0x8
    NSArray *_itemElements;	// 16 = 0x10
    IKChangeSet *_itemsChangeSet;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000063a6b
@property(retain, nonatomic) IKChangeSet *itemsChangeSet; // @synthesize itemsChangeSet=_itemsChangeSet;
@property(copy, nonatomic) NSArray *itemElements; // @synthesize itemElements=_itemElements;
@property(readonly, nonatomic) __weak IKDataSourceElement *dataSourceElement; // @synthesize dataSourceElement=_dataSourceElement;
- (void)resetUpdates;	// IMP=0x0000000000063a17
- (void)updateStylesUsingUpdater:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063526
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062a05
- (void)configureUpdatesWithImplementation:(id)arg1;	// IMP=0x00000000000629ff
- (void)teardown;	// IMP=0x00000000000629f9
- (void)initializeWithElementFactory:(id)arg1;	// IMP=0x00000000000629f3
- (void)unloadIndex:(long long)arg1;	// IMP=0x00000000000629ed
- (void)loadIndex:(long long)arg1;	// IMP=0x00000000000629e7
@property(readonly, copy, nonatomic) NSDictionary *indexTitles;
- (long long)indexOfItemForElement:(id)arg1;	// IMP=0x0000000000062968
- (id)elementForItemAtIndex:(long long)arg1;	// IMP=0x0000000000062909
- (id)prototypeForItemAtIndex:(long long)arg1;	// IMP=0x00000000000628aa
- (long long)numberOfItems;	// IMP=0x0000000000062866
@property(readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property(readonly, nonatomic) NSArray *prototypes;
- (id)initWithDataSourceElement:(id)arg1;	// IMP=0x000000000006275e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *masterPrototypes;
@property(readonly) Class superclass;

@end
