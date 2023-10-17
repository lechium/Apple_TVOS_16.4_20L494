//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSAttributedString, NSString, UIImage;

@protocol UISearchSuggestion <NSObject>
@property(retain, nonatomic) id representedObject;
@property(readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion;
@property(readonly, nonatomic) NSString *localizedSuggestion;

@optional
@property(readonly, nonatomic) UIImage *iconImage;
@property(readonly, nonatomic) NSString *localizedDescription;
@end

