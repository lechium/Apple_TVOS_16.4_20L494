//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsDropdown
{
}

- (void)_updateTextSuggestions;	// IMP=0x000000000037a09a
- (void)_showSuggestions;	// IMP=0x000000000037a094
- (void)_displayWithActivationType:(unsigned char)arg1;	// IMP=0x0000000000379fff
- (void)didSelectOptionAtIndex:(long long)arg1;	// IMP=0x0000000000379fa0
- (void)invalidate;	// IMP=0x0000000000379f9a
- (void)showSuggestionsDropdown:(void *)arg1 activationType:(unsigned char)arg2;	// IMP=0x0000000000379f4f
- (void)updateWithInformation:(void *)arg1;	// IMP=0x0000000000379f03
- (id)initWithInformation:(void *)arg1 inView:(id)arg2;	// IMP=0x0000000000379ed4

@end
