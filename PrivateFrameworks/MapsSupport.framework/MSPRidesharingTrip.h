/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPRidesharingTrip : PBCodable <NSCopying> {
    GEOComposedWaypoint * _endWaypoint;
    GEOComposedWaypoint * _startWaypoint;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) BOOL hasEndWaypoint;
@property (nonatomic, readonly) BOOL hasStartWaypoint;
@property (nonatomic, retain) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endWaypoint;
- (BOOL)hasEndWaypoint;
- (BOOL)hasStartWaypoint;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
