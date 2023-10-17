//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBCFUserNotificationButtonDefinition : NSObject
{
    _Bool _isPreferredButton;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _presentationStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001fae7f
@property(nonatomic) _Bool isPreferredButton; // @synthesize isPreferredButton=_isPreferredButton;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00100000001fadc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001fab70
- (unsigned long long)hash;	// IMP=0x00100000001faacd
- (id)initWithDictionary:(id)arg1 localizationBundle:(id)arg2;	// IMP=0x00100000001fa933
- (id)initWithTitle:(id)arg1 style:(long long)arg2 isPreferred:(_Bool)arg3;	// IMP=0x00100000001fa8aa

@end

