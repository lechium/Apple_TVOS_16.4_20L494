//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface ICSDKAddToLibraryResponse
{
    _Bool _updateRequired;	// 8 = 0x8
    NSDictionary *_addedItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000011ca00
@property(nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
@property(retain, nonatomic) NSDictionary *addedItems; // @synthesize addedItems=_addedItems;

@end

