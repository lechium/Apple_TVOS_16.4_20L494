//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSPaymentSheetAssetConfiguration;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetInlineImage : NSObject
{
    id <AMSPaymentSheetAssetConfiguration> _localAssetConfiguration;	// 8 = 0x8
    long long _imageType;	// 16 = 0x10
    NSString *_URLString;	// 24 = 0x18
    NSString *_value;	// 32 = 0x20
}

+ (id)textEncapsulationForServerValue:(id)arg1;	// IMP=0x00600000002bfede
- (void).cxx_destruct;	// IMP=0x00000000002c1167
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) id <AMSPaymentSheetAssetConfiguration> localAssetConfiguration; // @synthesize localAssetConfiguration=_localAssetConfiguration;
- (id)_symbolAssetConfigurationForDictionary:(id)arg1;	// IMP=0x00000000002c0f9a
- (long long)_scaleForString:(id)arg1;	// IMP=0x00000000002c0b42
- (long long)_ratingTypeForType:(id)arg1;	// IMP=0x00000000002c0984
- (id)_imageAssetConfigurationForDictionary:(id)arg1;	// IMP=0x00000000002c01cd
- (long long)_defaultAssetType;	// IMP=0x00000000002c01c2
@property(readonly, nonatomic) _Bool tint;
@property(readonly, nonatomic, getter=isServerSupplied) _Bool serverSupplied;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002bfced
- (id)initWithURLString:(id)arg1;	// IMP=0x00000000002bfc72

@end
