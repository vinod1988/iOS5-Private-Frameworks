/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class NSString;

@interface GMMClientPropertiesRequest : PBRequest
{
    NSString *_cohort;
    BOOL _hasHasLocationFix;
    BOOL _hasLocationFix;
    BOOL _hasMobileCountryCode;
    int _mobileCountryCode;
    BOOL _hasGzipEnabled;
    BOOL _gzipEnabled;
    NSString *_applicationName;
    NSString *_gaiaAuthToken;
    BOOL _hasVoiceSearchEnabled;
    BOOL _voiceSearchEnabled;
    BOOL _hasScreenPixelDensity;
    int _screenPixelDensity;
    CDStruct_56d48c16 _experimentIds;
    BOOL _hasMapTileCacheType;
    int _mapTileCacheType;
}

@property(nonatomic) int mapTileCacheType; // @synthesize mapTileCacheType=_mapTileCacheType;
@property(nonatomic) BOOL hasMapTileCacheType; // @synthesize hasMapTileCacheType=_hasMapTileCacheType;
@property(nonatomic) BOOL hasScreenPixelDensity; // @synthesize hasScreenPixelDensity=_hasScreenPixelDensity;
@property(nonatomic) BOOL hasVoiceSearchEnabled; // @synthesize hasVoiceSearchEnabled=_hasVoiceSearchEnabled;
@property(retain, nonatomic) NSString *gaiaAuthToken; // @synthesize gaiaAuthToken=_gaiaAuthToken;
@property(retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(nonatomic) BOOL hasGzipEnabled; // @synthesize hasGzipEnabled=_hasGzipEnabled;
@property(nonatomic) int mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(nonatomic) BOOL hasMobileCountryCode; // @synthesize hasMobileCountryCode=_hasMobileCountryCode;
@property(nonatomic) BOOL hasHasLocationFix; // @synthesize hasHasLocationFix=_hasHasLocationFix;
@property(retain, nonatomic) NSString *cohort; // @synthesize cohort=_cohort;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setExperimentIds:(int *)arg1 count:(unsigned int)arg2;
- (int)experimentIdAtIndex:(unsigned int)arg1;
- (void)addExperimentId:(int)arg1;
- (void)clearExperimentIds;
@property(readonly, nonatomic) int *experimentIds;
@property(readonly, nonatomic) unsigned int experimentIdsCount;
@property(nonatomic) int screenPixelDensity; // @synthesize screenPixelDensity=_screenPixelDensity;
@property(nonatomic) BOOL voiceSearchEnabled; // @synthesize voiceSearchEnabled=_voiceSearchEnabled;
@property(readonly, nonatomic) BOOL hasGaiaAuthToken;
@property(readonly, nonatomic) BOOL hasApplicationName;
@property(nonatomic) BOOL gzipEnabled; // @synthesize gzipEnabled=_gzipEnabled;
@property(nonatomic) BOOL hasLocationFix; // @synthesize hasLocationFix=_hasLocationFix;
@property(readonly, nonatomic) BOOL hasCohort;
- (void)dealloc;

@end
