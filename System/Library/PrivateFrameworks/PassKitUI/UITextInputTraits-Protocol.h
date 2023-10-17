//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, UITextInputPasswordRules;

@protocol UITextInputTraits <NSObject>

@optional
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
@end

