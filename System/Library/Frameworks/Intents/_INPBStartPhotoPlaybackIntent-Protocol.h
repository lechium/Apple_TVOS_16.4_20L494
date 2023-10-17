//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@protocol _INPBStartPhotoPlaybackIntent <NSObject>
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(retain, nonatomic) _INPBStringList *searchTerm;
@property(readonly, nonatomic) _Bool hasPeopleInPhoto;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto;
@property(readonly, nonatomic) _Bool hasLocationCreated;
@property(retain, nonatomic) _INPBLocation *locationCreated;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
@property(readonly, nonatomic) int *includedAttributes;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
@property(readonly, nonatomic) int *excludedAttributes;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property(readonly, nonatomic) _Bool hasAlbumName;
@property(retain, nonatomic) _INPBString *albumName;
- (int)StringAsIncludedAttributes:(NSString *)arg1;
- (NSString *)includedAttributesAsString:(int)arg1;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
- (int)StringAsExcludedAttributes:(NSString *)arg1;
- (NSString *)excludedAttributesAsString:(int)arg1;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@end

