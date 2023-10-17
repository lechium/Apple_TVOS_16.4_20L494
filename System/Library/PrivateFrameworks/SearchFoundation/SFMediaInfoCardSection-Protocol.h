//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFColor, SFMediaItem, SFRichText;

@protocol SFMediaInfoCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int watchListItemType;
@property(retain, nonatomic) SFRichText *specialOfferButtonLabel;
@property(nonatomic) _Bool isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier;
@property(copy, nonatomic) NSArray *offers;
@property(retain, nonatomic) SFActionItem *playAction;
@property(copy, nonatomic) NSArray *details;
@property(retain, nonatomic) SFMediaItem *mediaItem;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

