//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceViewController
{
}

- (void)pickerDidCancel;	// IMP=0x000000000006721e
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000066d58
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x0000000000066bcb
- (id)_filteredProperty:(id)arg1;	// IMP=0x0000000000066a56
- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;	// IMP=0x0000000000066788
- (id)init;	// IMP=0x000000000006673e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

