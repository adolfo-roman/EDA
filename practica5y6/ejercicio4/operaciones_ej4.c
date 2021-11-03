void bloque(Cola *d)
{
    encolarFinal(d, 101);
    encolarFinal(d, 102);
    encolarFinal(d, 103);
    encolarFinal(d, 104);
    encolarFinal(d, 105);

    desencolarInicio(d);

    pair(*d);

    desencolarInicio(d);

    encolarInicio(d, 99);
    encolarInicio(d, 98);
    encolarInicio(d, 97);

    desencolarFinal(d);

    encolarFinal(d, 120);
    encolarFinal(d, 121);

    pair(*d);

    encolarFinal(d, 122);

    desencolarInicio(d);
    desencolarInicio(d);
    desencolarInicio(d);

    pair(*d);
}