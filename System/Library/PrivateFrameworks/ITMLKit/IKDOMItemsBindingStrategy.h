//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKChangeSet, NSDictionary, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKDOMItemsBindingStrategy
{
    NSIndexSet *_autoHighlightedIndexes;	// 8 = 0x8
    NSDictionary *_usedAppPrototypesByIdentifier;	// 16 = 0x10
    IKChangeSet *_itemsChangeSet;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a1d8
@property(retain, nonatomic) IKChangeSet *itemsChangeSet; // @synthesize itemsChangeSet=_itemsChangeSet;
@property(retain, nonatomic) NSDictionary *usedAppPrototypesByIdentifier; // @synthesize usedAppPrototypesByIdentifier=_usedAppPrototypesByIdentifier;
@property(copy, nonatomic) NSIndexSet *autoHighlightedIndexes; // @synthesize autoHighlightedIndexes=_autoHighlightedIndexes;
- (void)_reevaluateVisibleIndexRange;	// IMP=0x0000000000009d43
- (id)_appDataItemFromDataItem:(id)arg1 binding:(id)arg2 prototypeIdentifier:(id)arg3 autoHighlighted:(_Bool *)arg4;	// IMP=0x0000000000009b17
- (void)_updateChildDOMElements;	// IMP=0x000000000000933c
- (void)willUpdateWithItems:(id)arg1 indexTitles:(id)arg2 usedPrototypesByIdentifier:(id)arg3 changeSet:(id)arg4;	// IMP=0x0000000000007fff
- (struct _NSRange)visibleItemsRange;	// IMP=0x0000000000007f82
- (void)didResolveKeys:(id)arg1;	// IMP=0x0000000000007e95
- (id)initWithDOMBindingController:(id)arg1;	// IMP=0x0000000000007e5c

@end

