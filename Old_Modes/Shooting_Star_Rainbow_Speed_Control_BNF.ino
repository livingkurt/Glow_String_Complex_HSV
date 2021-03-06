

void shooting_star_rainbow_speed_control_bnf()
{
  int rate = 10;
  int start_hue;
  int delta_hue = 20;
  start_hue = -1 * millis() / rate;
  int pos = beatsin16(5, 0, NUM_LEDS);
  leds[pos] = CHSV(start_hue, SATURATION, 255);
  fadeToBlackBy(leds, NUM_LEDS, 50);
  FastLED.show();
  start_hue += delta_hue;
}