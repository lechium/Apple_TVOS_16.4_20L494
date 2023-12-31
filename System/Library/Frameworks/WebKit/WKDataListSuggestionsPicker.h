//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPicker
{
    struct RetainPtr<WKDataListSuggestionsPickerView> _pickerView;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000000003796eb
- (void).cxx_destruct;	// IMP=0x00000000003796c4
- (void)invalidate;	// IMP=0x000000000037962d
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0000000000379597
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000000379585
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000037957a
- (void)showSuggestionsDropdown:(void *)arg1 activationType:(unsigned char)arg2;	// IMP=0x00000000003794bc
- (void)updateWithInformation:(void *)arg1;	// IMP=0x00000000003793d4
- (id)initWithInformation:(void *)arg1 inView:(id)arg2;	// IMP=0x00000000003792ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

